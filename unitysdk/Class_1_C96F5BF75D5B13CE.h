#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightStageLevelValueConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CD48300)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_0A70D0F69BA7E0EE_OFFSET UNITYSDK_OFFSET(0x1CD47AE0)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_376A6137CE42705F_OFFSET UNITYSDK_OFFSET(0x1CD47F60)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_7BE65CE4822218CA_OFFSET UNITYSDK_OFFSET(0x1CD48350)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD48130)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_9EBE5B6B2E87AEC7_OFFSET UNITYSDK_OFFSET(0x1CD47DF0)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD481C0)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD47D90)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD47B60)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD480F0)
#define CLASS_1_C96F5BF75D5B13CE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD48260)
#define CLASS_1_C96F5BF75D5B13CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD486C0)

inline static constexpr unsigned int Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex = 13517;

class Class_1_C96F5BF75D5B13CE : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex)->GetStaticField(0x48B80);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex)->GetStaticField(0x48B88);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex)->GetStaticField(0x48B90);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex)->GetStaticField(0x10B00);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96F5BF75D5B13CE_TypeDefinitionIndex)->GetStaticField(0x10B01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>* Method_1_0A70D0F69BA7E0EE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_0A70D0F69BA7E0EE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*> Method_1_9EBE5B6B2E87AEC7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_9EBE5B6B2E87AEC7_OFFSET))();
	}

	static ::RPG::GameCore::GridFightStageLevelValueConfigRow* Method_1_376A6137CE42705F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightStageLevelValueConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_376A6137CE42705F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7BE65CE4822218CA(::RPG::GameCore::GridFightStageLevelValueConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightStageLevelValueConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C96F5BF75D5B13CE_METHOD_1_7BE65CE4822218CA_OFFSET))(a1);
	}
};
