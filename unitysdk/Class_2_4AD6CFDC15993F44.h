#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F8DD29344D23142.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_6C30C65EACF8D014;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_4AD6CFDC15993F44_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1710DEA0)
#define CLASS_2_4AD6CFDC15993F44_GET_USEFORVISION_OFFSET UNITYSDK_OFFSET(0x1710DEE0)
#define CLASS_2_4AD6CFDC15993F44_GET_VISIONTAG_OFFSET UNITYSDK_OFFSET(0x1710DEC0)
#define CLASS_2_4AD6CFDC15993F44_METHOD_2_8002A10A0271B67D_OFFSET UNITYSDK_OFFSET(0x1710DA00)
#define CLASS_2_4AD6CFDC15993F44_METHOD_2_DE6710E273150031_OFFSET UNITYSDK_OFFSET(0x1710D8B0)
#define CLASS_2_4AD6CFDC15993F44_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1710DEB0)
#define CLASS_2_4AD6CFDC15993F44_SET_USEFORVISION_OFFSET UNITYSDK_OFFSET(0x1710DEF0)
#define CLASS_2_4AD6CFDC15993F44_SET_VISIONTAG_OFFSET UNITYSDK_OFFSET(0x1710DED0)
#define CLASS_2_4AD6CFDC15993F44__CTOR_OFFSET UNITYSDK_OFFSET(0x1710D620)

inline static constexpr unsigned int Class_2_4AD6CFDC15993F44_TypeDefinitionIndex = 53765;

class Class_2_4AD6CFDC15993F44 : public ::Class_1_6F8DD29344D23142
{
public:
	::System::Boolean _UseForVision_k__BackingField; // 0x60
	::RPG::GameCore::VisionZoneTag _VisionTag_k__BackingField; // 0x64
	::UnityEngine::Quaternion LFPEIILLEIG; // 0x68
	::System::UInt32 _Priority_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::TrackNpcVisionConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::TrackNpcVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE6710E273150031(::RPG::GameCore::GameEntity* a1, ::Class_1_6C30C65EACF8D014* a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6C30C65EACF8D014*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_METHOD_2_DE6710E273150031_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_8002A10A0271B67D(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_METHOD_2_8002A10A0271B67D_OFFSET))(this, a1);
	}

	::System::UInt32 get_Priority()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_SET_PRIORITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::VisionZoneTag get_VisionTag()
	{
		return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_GET_VISIONTAG_OFFSET))(this);
	}

	::System::Void set_VisionTag(::RPG::GameCore::VisionZoneTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionZoneTag))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_SET_VISIONTAG_OFFSET))(this, a1);
	}

	::System::Boolean get_UseForVision()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_GET_USEFORVISION_OFFSET))(this);
	}

	::System::Void set_UseForVision(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4AD6CFDC15993F44_SET_USEFORVISION_OFFSET))(this, a1);
	}
};
