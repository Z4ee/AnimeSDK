#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49053E586DA06DED.h"
#include "unitysdk/Enum_3_B89395EB88D202F4.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EA1FEF8121ADE963;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FBBD974B239A498C_METHOD_1_9F62D5795957EC13_OFFSET UNITYSDK_OFFSET(0x14033AB0)
#define CLASS_1_FBBD974B239A498C_METHOD_1_EA09313D5DACB89D_OFFSET UNITYSDK_OFFSET(0x14033D50)
#define CLASS_1_FBBD974B239A498C__CTOR_OFFSET UNITYSDK_OFFSET(0x14033AA0)

inline static constexpr unsigned int Class_1_FBBD974B239A498C_TypeDefinitionIndex = 76978;

class Class_1_FBBD974B239A498C : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHitEffect* Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_13; // 0x18
	::Class_3_F33F9DC5F4112336* Field_1_2; // 0x20
	::Class_1_EA1FEF8121ADE963* Field_1_14; // 0x28
	::MoleMole::Config::ConfigHitEffect* Field_1_4; // 0x30
	::MoleMole::Config::ConfigHitEffect* Field_1_6; // 0x38
	::System::String* Field_1_7; // 0x40
	::MoleMole::Config::HitAnimDirectionType Field_1_11; // 0x48
	::System::Boolean Field_1_18; // 0x4C
	::System::Boolean Field_1_15; // 0x4D
	::System::Boolean Field_1_9; // 0x4E
	::MoleMole::Config::AnimatorBeHitTag Field_1_19; // 0x50
	::System::Int32 Field_1_17; // 0x54
	::UnityEngine::Vector3 Field_1_8; // 0x58
	::System::Int32 Field_1_0; // 0x64
	::Enum_3_49053E586DA06DED Field_1_10; // 0x68
	::Enum_3_B89395EB88D202F4 Field_1_1; // 0x6C
	::MoleMole::Config::HitForwardType Field_1_12; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBBD974B239A498C__CTOR_OFFSET))(this);
	}

	static ::Class_1_FBBD974B239A498C* Method_1_9F62D5795957EC13(::Class_3_F33F9DC5F4112336* a1, ::Enum_3_B89395EB88D202F4 a2, ::System::Int32 a3, ::System::String* a4, ::MoleMole::Config::ConfigHitEffect* a5, ::MoleMole::Config::ConfigHitEffect* a6, ::MoleMole::Config::ConfigHitEffect* a7, ::MoleMole::Config::HitAnimDirectionType a8, ::Enum_3_49053E586DA06DED a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::System::Boolean a12, ::Class_1_EA1FEF8121ADE963* a13, ::MoleMole::Battle::Entity* a14, ::MoleMole::Config::HitForwardType a15, ::MoleMole::Config::AnimatorBeHitTag a16, ::System::Int32 a17, ::System::Boolean a18)
	{
		return ((::Class_1_FBBD974B239A498C*(*)(::Class_3_F33F9DC5F4112336*, ::Enum_3_B89395EB88D202F4, ::System::Int32, ::System::String*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::HitAnimDirectionType, ::Enum_3_49053E586DA06DED, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::HitForwardType, ::MoleMole::Config::AnimatorBeHitTag, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FBBD974B239A498C_METHOD_1_9F62D5795957EC13_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	static ::System::Void Method_1_EA09313D5DACB89D(::System::Collections::Generic::List_1<::Class_1_FBBD974B239A498C*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_FBBD974B239A498C*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBBD974B239A498C_METHOD_1_EA09313D5DACB89D_OFFSET))(a1);
	}
};
