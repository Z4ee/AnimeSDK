#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_799C63E51714B4FF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19778BD0)
#define CLASS_1_799C63E51714B4FF_METHOD_1_86A9D57BCDB7C1DA_OFFSET UNITYSDK_OFFSET(0x19778C20)
#define CLASS_1_799C63E51714B4FF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19778A00)
#define CLASS_1_799C63E51714B4FF_METHOD_1_96A6013A5EEBF6B5_OFFSET UNITYSDK_OFFSET(0x19778700)
#define CLASS_1_799C63E51714B4FF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19778A90)
#define CLASS_1_799C63E51714B4FF_METHOD_1_BD7AD44AF4011F58_OFFSET UNITYSDK_OFFSET(0x19778830)
#define CLASS_1_799C63E51714B4FF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x197786A0)
#define CLASS_1_799C63E51714B4FF_METHOD_1_DC57C57249946DFF_OFFSET UNITYSDK_OFFSET(0x197783F0)
#define CLASS_1_799C63E51714B4FF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19778470)
#define CLASS_1_799C63E51714B4FF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x197789C0)
#define CLASS_1_799C63E51714B4FF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19778B30)
#define CLASS_1_799C63E51714B4FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19778F40)

inline static constexpr unsigned int Class_1_799C63E51714B4FF_TypeDefinitionIndex = 10705;

class Class_1_799C63E51714B4FF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_799C63E51714B4FF_TypeDefinitionIndex)->GetStaticField(0x45130);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_799C63E51714B4FF_TypeDefinitionIndex)->GetStaticField(0x45138);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_799C63E51714B4FF_TypeDefinitionIndex)->GetStaticField(0x45140);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_799C63E51714B4FF_TypeDefinitionIndex)->GetStaticField(0xC650);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_799C63E51714B4FF_TypeDefinitionIndex)->GetStaticField(0xC651);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>* Method_1_DC57C57249946DFF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_DC57C57249946DFF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*> Method_1_96A6013A5EEBF6B5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_96A6013A5EEBF6B5_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelSkillRow* Method_1_BD7AD44AF4011F58(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_BD7AD44AF4011F58_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_86A9D57BCDB7C1DA(::RPG::GameCore::ChimeraDuelSkillRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_799C63E51714B4FF_METHOD_1_86A9D57BCDB7C1DA_OFFSET))(a1);
	}
};
