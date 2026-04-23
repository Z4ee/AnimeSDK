#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_FC1FF547964F59E4_METHOD_1_217E96FA35FE07A4_OFFSET UNITYSDK_OFFSET(0x99B1130)
#define CLASS_1_FC1FF547964F59E4_METHOD_1_277711466573BFBA_OFFSET UNITYSDK_OFFSET(0x99B0FD0)
#define CLASS_1_FC1FF547964F59E4_METHOD_1_BB5074D5C2E8D5CF_OFFSET UNITYSDK_OFFSET(0x99B0E70)

inline static constexpr unsigned int Class_1_FC1FF547964F59E4_TypeDefinitionIndex = 64298;

class Class_1_FC1FF547964F59E4 : public ::System::Object
{
public:
	static ::UnityEngine::Camera* Method_1_BB5074D5C2E8D5CF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC1FF547964F59E4_METHOD_1_BB5074D5C2E8D5CF_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_277711466573BFBA()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC1FF547964F59E4_METHOD_1_277711466573BFBA_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_217E96FA35FE07A4(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1FF547964F59E4_METHOD_1_217E96FA35FE07A4_OFFSET))(a1, a2);
	}
};
