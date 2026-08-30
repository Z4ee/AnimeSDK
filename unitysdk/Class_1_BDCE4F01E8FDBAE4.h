#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }
namespace RPG::GameCore { class MappingInfoRow; }

#define CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_456EF92A5248E551_1_OFFSET UNITYSDK_OFFSET(0x152E8B20)
#define CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_456EF92A5248E551_OFFSET UNITYSDK_OFFSET(0x152E8A00)
#define CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_EC4FEB14B982F7AC_OFFSET UNITYSDK_OFFSET(0x152E8C40)
#define CLASS_1_BDCE4F01E8FDBAE4__CTOR_OFFSET UNITYSDK_OFFSET(0x152E8D40)

inline static constexpr unsigned int Class_1_BDCE4F01E8FDBAE4_TypeDefinitionIndex = 62994;

class Class_1_BDCE4F01E8FDBAE4 : public ::System::Object
{
public:
	::RPG::Client::ActivityTelevisionData* APPIHABBCGK; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityTelevisionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + CLASS_1_BDCE4F01E8FDBAE4__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_456EF92A5248E551()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_456EF92A5248E551_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_456EF92A5248E551_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_456EF92A5248E551_1_OFFSET))(this);
	}

	static ::Class_1_BDCE4F01E8FDBAE4* Method_1_EC4FEB14B982F7AC(::RPG::GameCore::MappingInfoRow* a1)
	{
		return ((::Class_1_BDCE4F01E8FDBAE4*(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_BDCE4F01E8FDBAE4_METHOD_1_EC4FEB14B982F7AC_OFFSET))(a1);
	}
};
