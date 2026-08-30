#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::GameCore { class MappingInfoRow; }

#define CLASS_1_3ECCC8300B1AE094_METHOD_1_456EF92A5248E551_1_OFFSET UNITYSDK_OFFSET(0xC363110)
#define CLASS_1_3ECCC8300B1AE094_METHOD_1_456EF92A5248E551_OFFSET UNITYSDK_OFFSET(0xC363040)
#define CLASS_1_3ECCC8300B1AE094_METHOD_1_EC4FEB14B982F7AC_OFFSET UNITYSDK_OFFSET(0xC3631F0)
#define CLASS_1_3ECCC8300B1AE094__CTOR_OFFSET UNITYSDK_OFFSET(0xC3632F0)

inline static constexpr unsigned int Class_1_3ECCC8300B1AE094_TypeDefinitionIndex = 62993;

class Class_1_3ECCC8300B1AE094 : public ::System::Object
{
public:
	::RPG::Client::ActivitySummonStage* APPIHABBCGK; // 0x10

	::System::Void _ctor(::RPG::Client::ActivitySummonStage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + CLASS_1_3ECCC8300B1AE094__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_456EF92A5248E551()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ECCC8300B1AE094_METHOD_1_456EF92A5248E551_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_456EF92A5248E551_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ECCC8300B1AE094_METHOD_1_456EF92A5248E551_1_OFFSET))(this);
	}

	static ::Class_1_3ECCC8300B1AE094* Method_1_EC4FEB14B982F7AC(::RPG::GameCore::MappingInfoRow* a1)
	{
		return ((::Class_1_3ECCC8300B1AE094*(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_3ECCC8300B1AE094_METHOD_1_EC4FEB14B982F7AC_OFFSET))(a1);
	}
};
