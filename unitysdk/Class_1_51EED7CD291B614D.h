#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51EED7CD291B614D_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9097A30)
#define CLASS_1_51EED7CD291B614D_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9097950)
#define CLASS_1_51EED7CD291B614D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9097380)
#define CLASS_1_51EED7CD291B614D_METHOD_1_64992AB6437B5259_OFFSET UNITYSDK_OFFSET(0x90973F0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x9097C00)
#define CLASS_1_51EED7CD291B614D_METHOD_1_77FB53DA1A159A9E_OFFSET UNITYSDK_OFFSET(0x90975F0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_7DC73FB398E36010_OFFSET UNITYSDK_OFFSET(0x90977E0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x9097AE0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9097040)
#define CLASS_1_51EED7CD291B614D_METHOD_1_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x9096CD0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x9096EC0)
#define CLASS_1_51EED7CD291B614D_METHOD_1_E91C25F1446400C2_OFFSET UNITYSDK_OFFSET(0x9097500)
#define CLASS_1_51EED7CD291B614D_METHOD_1_F557550EF2D1F7F1_OFFSET UNITYSDK_OFFSET(0x9097080)
#define CLASS_1_51EED7CD291B614D__CTOR_OFFSET UNITYSDK_OFFSET(0x9096D70)

inline static constexpr unsigned int Class_1_51EED7CD291B614D_TypeDefinitionIndex = 67990;

class Class_1_51EED7CD291B614D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_6; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_1_56FF45D7B2C55655* Field_1_8; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28
	::RPG::GameCore::TransformComponent* Field_1_9; // 0x30
	::System::Action* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_5; // 0x40
	::System::Action* Field_1_3; // 0x48
	::System::Int32 Field_1_7; // 0x50
	::UnityEngine::Vector3 Field_1_10; // 0x54
	::UnityEngine::Vector3 Field_1_1; // 0x60

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_CED7A2E9A352C6FD_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F557550EF2D1F7F1(::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_F557550EF2D1F7F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_64992AB6437B5259(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_64992AB6437B5259_OFFSET))(this, a1);
	}

	::System::Void Method_1_E91C25F1446400C2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_E91C25F1446400C2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_77FB53DA1A159A9E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_77FB53DA1A159A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DC73FB398E36010(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_7DC73FB398E36010_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_METHOD_1_1290EA767C459179_OFFSET))(this);
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
