#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_1_9B467A75B352C0A6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3FBB0)

inline static constexpr unsigned int Class_1_9B467A75B352C0A6_TypeDefinitionIndex = 39797;

class Class_1_9B467A75B352C0A6 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Tuple_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion>*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::Class_2_1A8148841049062A*>* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B467A75B352C0A6__CTOR_OFFSET))(this);
	}
};
