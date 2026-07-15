#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3D870)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributeData_TypeDefinitionIndex = 60927;

	class ElfProgressAttributeData : public ::System::Object
	{
	public:
		::System::Single AttributeValue; // 0x10
		::RPG::Client::TextID AttributeName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA__CTOR_OFFSET))(this);
		}
	};
}
