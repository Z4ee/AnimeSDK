#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PreloadSingleGroupConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADSINGLELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19173DC0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadSingleLevelConfig_TypeDefinitionIndex = 73920;

	class PreloadSingleLevelConfig : public ::System::Object
	{
	public:
		::MoleMole::PreloadSingleGroupConfig* levelInfo; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* monsterIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADSINGLELEVELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
