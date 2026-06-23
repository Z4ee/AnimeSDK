#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkinMdbDataOfRenderer; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SKINMDBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE982D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkinMdbData_TypeDefinitionIndex = 62870;

	class SkinMdbData : public ::System::Object
	{
	public:
		::System::Int32 SkinID; // 0x10
		::System::String* Tips; // 0x18
		::Il2CppArray<::MoleMole::Config::SkinMdbDataOfRenderer*>* Config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINMDBDATA__CTOR_OFFSET))(this);
		}
	};
}
