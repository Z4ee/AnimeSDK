#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C143760)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1437A0)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERSMAP_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C1437B0)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERSMAP_B__15_1_OFFSET UNITYSDK_OFFSET(0x1C1437E0)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1C1437F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterUtilities___c_TypeDefinitionIndex = 7376;

	class FormatterUtilities___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::FormatterUtilities___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::FormatterUtilities___c**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities___c_TypeDefinitionIndex)->GetStaticField(0x62B0);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities___c_TypeDefinitionIndex)->GetStaticField(0x62B8);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities___c_TypeDefinitionIndex)->GetStaticField(0x62C0);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities___c_TypeDefinitionIndex)->GetStaticField(0x62C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__CTOR_OFFSET))(this);
		}

		::System::String* _FindSerializableMembersMap_b__15_0(::System::Reflection::MemberInfo* n)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERSMAP_B__15_0_OFFSET))(this, n);
		}

		::System::Reflection::MemberInfo* _FindSerializableMembersMap_b__15_1(::System::Reflection::MemberInfo* n)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERSMAP_B__15_1_OFFSET))(this, n);
		}

		::System::Boolean _FindSerializableMembers_b__16_0(::System::Reflection::MemberInfo* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__FINDSERIALIZABLEMEMBERS_B__16_0_OFFSET))(this, n);
		}
	};
}
