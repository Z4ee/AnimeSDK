#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::SceneMark { class SceneMarkDataBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_MONOSCENEMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1792BAF0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int MonoSceneMark_TypeDefinitionIndex = 81870;

	class MonoSceneMark : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkDataBase*>* Data; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARK__CTOR_OFFSET))(this);
		}
	};
}
