#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class NpcPrototypeDataInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGNPCPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E43A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNpcPrototype_TypeDefinitionIndex = 51914;

	class ConfigNpcPrototype : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::NpcPrototypeDataInfo*>* NpcPrototypeDataInfos; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNPCPROTOTYPE__CTOR_OFFSET))(this);
		}
	};
}
