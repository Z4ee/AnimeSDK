#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_2_68CB91321C3E76A7;
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GETATTRIBUTEASINT_OFFSET UNITYSDK_OFFSET(0x1BD004B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BD00470)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD00480)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGhostBase_TypeDefinitionIndex = 78712;

	class PixAirGhostBase : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Int32 _RuntimeID_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Int32 GetAttributeAsInt(::Class_2_68CB91321C3E76A7* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_68CB91321C3E76A7*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GETATTRIBUTEASINT_OFFSET))(this, a1, a2);
		}
	};
}
