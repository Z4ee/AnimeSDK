#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }

#define CLASS_1_4D949933D8CC0B4F_METHOD_1_D63ECBF084F269C8_OFFSET UNITYSDK_OFFSET(0x9606F70)
#define CLASS_1_4D949933D8CC0B4F_METHOD_1_DDA76AE6F0B9CDA7_OFFSET UNITYSDK_OFFSET(0x96068D0)
#define CLASS_1_4D949933D8CC0B4F_METHOD_1_E2512A38995FEE91_OFFSET UNITYSDK_OFFSET(0x96077E0)
#define CLASS_1_4D949933D8CC0B4F_METHOD_1_FBB8BE531CECF615_OFFSET UNITYSDK_OFFSET(0x96073D0)

inline static constexpr unsigned int Class_1_4D949933D8CC0B4F_TypeDefinitionIndex = 49377;

class Class_1_4D949933D8CC0B4F : public ::System::Object
{
public:
	static ::System::Void Method_1_DDA76AE6F0B9CDA7(::RPG::GameCore::BlockConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BlockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D949933D8CC0B4F_METHOD_1_DDA76AE6F0B9CDA7_OFFSET))(a1);
	}

	static ::System::Void Method_1_D63ECBF084F269C8(::RPG::GameCore::BlockConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BlockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D949933D8CC0B4F_METHOD_1_D63ECBF084F269C8_OFFSET))(a1);
	}

	static ::System::Void Method_1_FBB8BE531CECF615(::RPG::GameCore::BlockConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BlockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D949933D8CC0B4F_METHOD_1_FBB8BE531CECF615_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>* Method_1_E2512A38995FEE91(::RPG::GameCore::BlockConfig* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>*(*)(::RPG::GameCore::BlockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D949933D8CC0B4F_METHOD_1_E2512A38995FEE91_OFFSET))(a1);
	}
};
