#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D70A30D666F20D90;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51EED7CD291B614D_METHOD_1_0469216CFDDB8E31_OFFSET UNITYSDK_OFFSET(0x17F587D0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x17F58A00)
#define CLASS_1_51EED7CD291B614D_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17F58940)
#define CLASS_1_51EED7CD291B614D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17F582F0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x17F58BE0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_77FB53DA1A159A9E_OFFSET UNITYSDK_OFFSET(0x17F585E0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_A2242407E56DF94F_OFFSET UNITYSDK_OFFSET(0x17F58360)
#define CLASS_1_51EED7CD291B614D_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x17F57A60)
#define CLASS_1_51EED7CD291B614D_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17F58AC0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F57E10)
#define CLASS_1_51EED7CD291B614D_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17F57C70)
#define CLASS_1_51EED7CD291B614D_METHOD_1_D8DC209B721710A0_OFFSET UNITYSDK_OFFSET(0x17F57E50)
#define CLASS_1_51EED7CD291B614D_METHOD_1_E0C8A556B1402FB2_OFFSET UNITYSDK_OFFSET(0x17F584D0)
#define CLASS_1_51EED7CD291B614D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F57B00)

inline static constexpr unsigned int Class_1_51EED7CD291B614D_TypeDefinitionIndex = 73760;

class Class_1_51EED7CD291B614D : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x10
	::System::Action* MJEBPDLIIBA; // 0x18
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x20
	::System::Action* LKNEOEMBBJK; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* GNHFIKJONPP; // 0x30
	::Class_1_D70A30D666F20D90* NFPCBMCGFDD; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* MDPOCEDAMML; // 0x40
	::System::Action* FCEAGLICLON; // 0x48
	::UnityEngine::Vector3 IJFJJHMMNMA; // 0x50
	::UnityEngine::Vector3 PCKJOPIOIEJ; // 0x5C
	::System::Int32 GMDBHJKEAEI; // 0x68

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D8DC209B721710A0(::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_D8DC209B721710A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2242407E56DF94F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_A2242407E56DF94F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0C8A556B1402FB2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_E0C8A556B1402FB2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_77FB53DA1A159A9E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_77FB53DA1A159A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0469216CFDDB8E31(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_0469216CFDDB8E31_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_77577333B4681208_OFFSET))(this);
	}
};
