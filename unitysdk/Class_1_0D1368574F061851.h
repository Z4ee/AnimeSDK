#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_62;
class Class_1_0D1368574F061851_Class_1_C8E70D7D0B84E56D;
class Class_1_48570DED401BD199;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { template <typename T1, typename T2> class MHashLinkedList_2; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace RPG::Client::AssetSystem { class InstanceLoader; }

#define CLASS_1_0D1368574F061851_METHOD_1_1B80C3E19F7FCAB2_OFFSET UNITYSDK_OFFSET(0x17B6CD20)
#define CLASS_1_0D1368574F061851_METHOD_1_39A039C8AFEB782A_OFFSET UNITYSDK_OFFSET(0x17B6C8B0)
#define CLASS_1_0D1368574F061851_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x17B6D260)
#define CLASS_1_0D1368574F061851_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x17B6D420)
#define CLASS_1_0D1368574F061851_METHOD_1_A59B68247E5828FD_OFFSET UNITYSDK_OFFSET(0x17B6D0A0)
#define CLASS_1_0D1368574F061851_METHOD_1_AA4981CBA9615979_OFFSET UNITYSDK_OFFSET(0x17B6CE90)
#define CLASS_1_0D1368574F061851_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x17B6CFF0)
#define CLASS_1_0D1368574F061851__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B6E450)

inline static constexpr unsigned int Class_1_0D1368574F061851_TypeDefinitionIndex = 37870;

class Class_1_0D1368574F061851 : public ::System::Object
{
public:
	static ::RPG::Client::MHashLinkedList_2<::Class_0_16E4307DCC419505_62*, ::Class_1_0D1368574F061851_Class_1_C8E70D7D0B84E56D*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MHashLinkedList_2<::Class_0_16E4307DCC419505_62*, ::Class_1_0D1368574F061851_Class_1_C8E70D7D0B84E56D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D1368574F061851_TypeDefinitionIndex)->GetStaticField(0xD670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_39A039C8AFEB782A(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_39A039C8AFEB782A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1B80C3E19F7FCAB2(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_1B80C3E19F7FCAB2_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA4981CBA9615979(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_AA4981CBA9615979_OFFSET))(a1);
	}

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::System::Void Method_1_A59B68247E5828FD(::RPG::Client::AssetSystem::InstanceLoader* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::InstanceLoader*))((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_A59B68247E5828FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_70603E2AE56EBD6B(::Class_1_48570DED401BD199* a1)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*))((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_70603E2AE56EBD6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D1368574F061851_METHOD_1_81FEFD1B22CE37A2_OFFSET))();
	}
};
