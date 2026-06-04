#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_61;
class Class_1_48570DED401BD199;
class Class_1_B7DA2F3769251CC8_Class_1_C8E70D7D0B84E56D;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { template <typename T1, typename T2> class MHashLinkedList_2; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace RPG::Client::AssetSystem { class InstanceLoader; }

#define CLASS_1_B7DA2F3769251CC8_METHOD_1_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x188CABA0)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_1B7A698D749E6A5A_OFFSET UNITYSDK_OFFSET(0x188CAA10)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x188CAFF0)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_58A12409DAC7E7F3_OFFSET UNITYSDK_OFFSET(0x188CA880)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x188CAE20)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_A59B68247E5828FD_OFFSET UNITYSDK_OFFSET(0x188CAC50)
#define CLASS_1_B7DA2F3769251CC8_METHOD_1_C2B07804FAE3FCCF_OFFSET UNITYSDK_OFFSET(0x188CA510)
#define CLASS_1_B7DA2F3769251CC8__CCTOR_OFFSET UNITYSDK_OFFSET(0x188CBD70)

inline static constexpr unsigned int Class_1_B7DA2F3769251CC8_TypeDefinitionIndex = 38607;

class Class_1_B7DA2F3769251CC8 : public ::System::Object
{
public:
	static ::RPG::Client::MHashLinkedList_2<::Class_0_16E4307DCC419505_61*, ::Class_1_B7DA2F3769251CC8_Class_1_C8E70D7D0B84E56D*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MHashLinkedList_2<::Class_0_16E4307DCC419505_61*, ::Class_1_B7DA2F3769251CC8_Class_1_C8E70D7D0B84E56D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7DA2F3769251CC8_TypeDefinitionIndex)->GetStaticField(0x1A030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C2B07804FAE3FCCF(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_C2B07804FAE3FCCF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_58A12409DAC7E7F3(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_58A12409DAC7E7F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B7A698D749E6A5A(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_1B7A698D749E6A5A_OFFSET))(a1);
	}

	static ::System::Void Method_1_0581090195E9C81F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_0581090195E9C81F_OFFSET))();
	}

	static ::System::Void Method_1_A59B68247E5828FD(::RPG::Client::AssetSystem::InstanceLoader* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::InstanceLoader*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_A59B68247E5828FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_70603E2AE56EBD6B(::Class_1_48570DED401BD199* a1)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_70603E2AE56EBD6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7DA2F3769251CC8_METHOD_1_4857357D5C1BFCE8_OFFSET))();
	}
};
