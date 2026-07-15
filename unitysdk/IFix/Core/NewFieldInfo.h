#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class ThreadStackInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFIX_CORE_NEWFIELDINFO_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1B5371A0)
#define IFIX_CORE_NEWFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B536610)
#define IFIX_CORE_NEWFIELDINFO_HASINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B539080)
#define IFIX_CORE_NEWFIELDINFO_OBJECTTOINDEX_OFFSET UNITYSDK_OFFSET(0x1B539200)
#define IFIX_CORE_NEWFIELDINFO_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B538FC0)
#define IFIX_CORE_NEWFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B536DB0)
#define IFIX_CORE_NEWFIELDINFO_SWEEP_OFFSET UNITYSDK_OFFSET(0x1B5359C0)
#define IFIX_CORE_NEWFIELDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5392E0)
#define IFIX_CORE_NEWFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B538FB0)

namespace IFix::Core
{
	inline static constexpr unsigned int NewFieldInfo_TypeDefinitionIndex = 9795;

	class NewFieldInfo : public ::System::Object
	{
	public:
		static ::IFix::Core::ThreadStackInfo** StaticGet_stack()
		{
			return (::IFix::Core::ThreadStackInfo**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>** StaticGet_objList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_newFieldValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::Int32* StaticGet_staticObjectKey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		::System::Type* FieldType; // 0x10
		::System::Type* DeclaringType; // 0x18
		::System::String* Name; // 0x20
		::System::Int32 MethodId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO__CCTOR_OFFSET))();
		}

		::System::Object* SetDefaultValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SETDEFAULTVALUE_OFFSET))(this, a1);
		}

		static ::System::Void Sweep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SWEEP_OFFSET))();
		}

		::System::Void CheckInit(::IFix::Core::VirtualMachine* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_CHECKINIT_OFFSET))(this, a1, a2);
		}

		::System::Int32 ObjectToIndex(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_OBJECTTOINDEX_OFFSET))(this, a1);
		}

		::System::Boolean HasInitialize(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_HASINITIALIZE_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_GETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_NEWFIELDINFO_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
