#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class ThreadStackInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFIX_CORE_NEWFIELDINFO_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x17F8A600)
#define IFIX_CORE_NEWFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17F89B90)
#define IFIX_CORE_NEWFIELDINFO_HASINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17F8BDC0)
#define IFIX_CORE_NEWFIELDINFO_OBJECTTOINDEX_OFFSET UNITYSDK_OFFSET(0x17F8BFC0)
#define IFIX_CORE_NEWFIELDINFO_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17F8BD60)
#define IFIX_CORE_NEWFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17F8A1F0)
#define IFIX_CORE_NEWFIELDINFO_SWEEP_OFFSET UNITYSDK_OFFSET(0x17F89100)
#define IFIX_CORE_NEWFIELDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8C040)
#define IFIX_CORE_NEWFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8BD50)

namespace IFix::Core
{
	inline static constexpr unsigned int NewFieldInfo_TypeDefinitionIndex = 9780;

	class NewFieldInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_newFieldValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>** StaticGet_objList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xA58);
		}
		static ::IFix::Core::ThreadStackInfo** StaticGet_stack()
		{
			return (::IFix::Core::ThreadStackInfo**)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::Int32* StaticGet_staticObjectKey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NewFieldInfo_TypeDefinitionIndex)->GetStaticField(0x630);
		}
		::System::String* Name; // 0x10
		::System::Type* FieldType; // 0x18
		::System::Type* DeclaringType; // 0x20
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
