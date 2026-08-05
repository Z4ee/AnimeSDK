#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/LevelZeroMonsterCreateDataBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x149D5A30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LevelZeroMonsterCreateData_TypeDefinitionIndex = 85985;

	class LevelZeroMonsterCreateData : public ::MoleMole::FlowCanvas::LevelZeroMonsterCreateDataBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* anchorList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERCREATEDATA__CTOR_OFFSET))(this);
		}
	};
}
