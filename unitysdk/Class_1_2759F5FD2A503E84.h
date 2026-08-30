#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AEC4D667AA9BE4FB;
namespace RPG::GameCore { class RtDamageConstConfig; }

#define CLASS_1_2759F5FD2A503E84_METHOD_1_5B65052A9F19A75B_OFFSET UNITYSDK_OFFSET(0x16FBF250)
#define CLASS_1_2759F5FD2A503E84_METHOD_1_EC822C7561FFC9E1_OFFSET UNITYSDK_OFFSET(0x16FBF500)

inline static constexpr unsigned int Class_1_2759F5FD2A503E84_TypeDefinitionIndex = 54415;

class Class_1_2759F5FD2A503E84 : public ::System::Object
{
public:
	static ::Class_1_AEC4D667AA9BE4FB* Method_1_5B65052A9F19A75B(::Class_1_AEC4D667AA9BE4FB* a1, ::RPG::GameCore::RtDamageConstConfig* a2)
	{
		return ((::Class_1_AEC4D667AA9BE4FB*(*)(::Class_1_AEC4D667AA9BE4FB*, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2759F5FD2A503E84_METHOD_1_5B65052A9F19A75B_OFFSET))(a1, a2);
	}

	static ::Class_1_AEC4D667AA9BE4FB* Method_1_EC822C7561FFC9E1()
	{
		return ((::Class_1_AEC4D667AA9BE4FB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2759F5FD2A503E84_METHOD_1_EC822C7561FFC9E1_OFFSET))();
	}
};
