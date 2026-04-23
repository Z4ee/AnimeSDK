#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class ThreadStackInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFIX_CORE_NEWFIELDINFO_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1713F060)
#define IFIX_CORE_NEWFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1713E650)
#define IFIX_CORE_NEWFIELDINFO_HASINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17140C70)
#define IFIX_CORE_NEWFIELDINFO_OBJECTTOINDEX_OFFSET UNITYSDK_OFFSET(0x17140EE0)
#define IFIX_CORE_NEWFIELDINFO_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17140C10)
#define IFIX_CORE_NEWFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1713EC70)
#define IFIX_CORE_NEWFIELDINFO_SWEEP_OFFSET UNITYSDK_OFFSET(0x1713DC00)
#define IFIX_CORE_NEWFIELDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17140F60)
#define IFIX_CORE_NEWFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17140C00)

namespace IFix::Core
{
	inline static constexpr unsigned int NewFieldInfo_TypeDefinitionIndex = 9953;

	class NewFieldInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_newFieldValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>** StaticGet_objList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::IFix::Core::ThreadStackInfo** StaticGet_stack()
		{
			return (::IFix::Core::ThreadStackInfo**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::System::Int32* StaticGet_staticObjectKey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		::System::Type* DeclaringType; // 0x10
		::System::String* Name; // 0x18
		::System::Type* FieldType; // 0x20
		::System::Int32 MethodId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO__CCTOR_OFFSET))();
		}

		::System::Object* SetDefaultValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SETDEFAULTVALUE_OFFSET))(this, obj);
		}

		static ::System::Void Sweep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SWEEP_OFFSET))();
		}

		::System::Void CheckInit(::IFix::Core::VirtualMachine* virtualMachine, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_CHECKINIT_OFFSET))(this, virtualMachine, obj);
		}

		::System::Int32 ObjectToIndex(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_OBJECTTOINDEX_OFFSET))(this, obj);
		}

		::System::Boolean HasInitialize(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_HASINITIALIZE_OFFSET))(this, obj);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_GETVALUE_OFFSET))(this, obj);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SETVALUE_OFFSET))(this, obj, value);
		}
	};
}
