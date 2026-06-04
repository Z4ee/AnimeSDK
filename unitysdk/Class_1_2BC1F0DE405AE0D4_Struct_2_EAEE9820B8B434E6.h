#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C8D1FDF5B7DC671F;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_0DC6D18BABC32AD8_OFFSET UNITYSDK_OFFSET(0x2BC6190)
#define CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x2BC61A0)
#define CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_52C2CCD7D5CA7D95_OFFSET UNITYSDK_OFFSET(0x2BC6120)
#define CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x2BC6100)
#define CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6__CTOR_OFFSET UNITYSDK_OFFSET(0x2BC60F0)

inline static constexpr unsigned int Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6_TypeDefinitionIndex = 64825;

struct alignas(8) Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6
{
	::Class_1_C8D1FDF5B7DC671F* Field_2_0; // 0x10
	::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* Field_2_1; // 0x18
	::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo* Field_2_2; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x28
	::Il2CppArray<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* Field_2_4; // 0x30

	::System::Void _ctor(::Class_1_C8D1FDF5B7DC671F* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a2, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C8D1FDF5B7DC671F*, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	/*
	::Struct_2_085541A9CFF64383 Method_2_52C2CCD7D5CA7D95()
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_52C2CCD7D5CA7D95_OFFSET))(this);
	}
	*/

	::System::Void Method_2_0DC6D18BABC32AD8(::Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6&))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_0DC6D18BABC32AD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_STRUCT_2_EAEE9820B8B434E6_METHOD_2_1F130271093617A5_OFFSET))(this);
	}
};
