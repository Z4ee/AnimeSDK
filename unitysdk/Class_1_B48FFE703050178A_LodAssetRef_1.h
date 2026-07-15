#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_B48FFE703050178A_LodAssetRef_1_TypeDefinitionIndex = 66129;

template <typename T>
class Class_1_B48FFE703050178A_LodAssetRef_1 : public ::System::Object
{
public:
	::System::String* _path; // 0x0
	::System::Int32 _refCount; // 0x0
	T _loadAsset; // 0x0
	::RPG::Client::IAssetOperation* _assetOp; // 0x0
	::RPG::Client::CachedAssetLogicType _logicType; // 0x0
};
