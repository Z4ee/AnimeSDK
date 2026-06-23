#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole { class ConfigHollowChessboardCameraDragSpeedItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x158CBCA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowChessboardCameraDragSpeed_TypeDefinitionIndex = 54309;

	class ConfigHollowChessboardCameraDragSpeed : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigHollowChessboardCameraDragSpeedItem*>* Items; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEED__CTOR_OFFSET))(this);
		}
	};
}
