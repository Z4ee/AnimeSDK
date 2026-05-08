#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88388CE69AD496F6.h"
#include "unitysdk/Class_2_DCFFBB6D22760266_Enum_3_EEF28B438B557B2E.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class Volume_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }

inline static constexpr unsigned int Class_2_DCFFBB6D22760266_TypeDefinitionIndex = 58700;

template <typename T1, typename T2>
class Class_2_DCFFBB6D22760266 : public ::Class_1_88388CE69AD496F6
{
public:
	::System::Single Field_2_0; // 0x0
	::Foundation::Variable_1<::System::Single> Field_2_1; // 0x0
	::System::Single Field_2_2; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x0
	T2 Field_2_4; // 0x0
	::System::Single Field_2_5; // 0x0
	::Class_2_DCFFBB6D22760266_Enum_3_EEF28B438B557B2E<T1, T2> Field_2_6; // 0x0
	T1 Field_2_7; // 0x0
	::System::Action* Field_2_8; // 0x0
	::System::Action* Field_2_9; // 0x0
	::System::Boolean Field_2_10; // 0x0
	::Class_1_8A50BFB20D9D2482* Field_2_11; // 0x0
	::Class_2_167BB37617B940E3* Field_2_12; // 0x0
};
