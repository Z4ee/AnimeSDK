#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERMAPPINGCONFIG_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x129D64A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterMappingConfig_KeyValueInfo_TypeDefinitionIndex = 70472;

	class MonsterMappingConfig_KeyValueInfo : public ::System::Object
	{
	public:
		::System::Int32 keyInst; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MonsterMappingEntry*>* valueInst; // 0x18

		::System::Void _ctor(::System::Int32 _keyInst, ::System::Collections::Generic::List_1<::MoleMole::MonsterMappingEntry*>* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MonsterMappingEntry*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
