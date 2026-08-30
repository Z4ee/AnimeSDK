#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_2DD99E0BD9E658CD_METHOD_1_277711466573BFBA_OFFSET UNITYSDK_OFFSET(0x16232390)
#define CLASS_1_2DD99E0BD9E658CD_METHOD_1_BB5074D5C2E8D5CF_OFFSET UNITYSDK_OFFSET(0x16232250)
#define CLASS_1_2DD99E0BD9E658CD_METHOD_1_EA4A579EA8A5519B_OFFSET UNITYSDK_OFFSET(0x162324D0)

inline static constexpr unsigned int Class_1_2DD99E0BD9E658CD_TypeDefinitionIndex = 69727;

class Class_1_2DD99E0BD9E658CD : public ::System::Object
{
public:
	static ::UnityEngine::Camera* Method_1_BB5074D5C2E8D5CF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DD99E0BD9E658CD_METHOD_1_BB5074D5C2E8D5CF_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_277711466573BFBA()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DD99E0BD9E658CD_METHOD_1_277711466573BFBA_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_EA4A579EA8A5519B(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2DD99E0BD9E658CD_METHOD_1_EA4A579EA8A5519B_OFFSET))(a1, a2);
	}
};
