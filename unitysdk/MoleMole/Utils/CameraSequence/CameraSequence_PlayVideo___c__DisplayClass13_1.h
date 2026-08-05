#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequence_PlayVideo___c__DisplayClass13_0; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20380)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__RECEIVENOTIFYBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x15B20390)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_PlayVideo___c__DisplayClass13_1_TypeDefinitionIndex = 41849;

	class CameraSequence_PlayVideo___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* runningCoroutine; // 0x10
		::MoleMole::Utils::CameraSequence::CameraSequence_PlayVideo___c__DisplayClass13_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReceiveNotifyBegin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__RECEIVENOTIFYBEGIN_B__1_OFFSET))(this);
		}
	};
}
