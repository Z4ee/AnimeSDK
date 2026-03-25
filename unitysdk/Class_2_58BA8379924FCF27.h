#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F19AB08624168191.h"

namespace RPG::Client::Data { template <typename T> class DataProperty_1; }
namespace System { class String; }

#define CLASS_2_58BA8379924FCF27__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD1400)

inline static constexpr unsigned int Class_2_58BA8379924FCF27_TypeDefinitionIndex = 60196;

class Class_2_58BA8379924FCF27 : public ::Class_1_F19AB08624168191
{
public:
	::RPG::Client::Data::DataProperty_1<::System::Single>* Field_2_1; // 0x38
	::RPG::Client::Data::DataProperty_1<::System::String*>* Field_2_0; // 0x40
	::RPG::Client::Data::DataProperty_1<::System::Boolean>* Field_2_2; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_58BA8379924FCF27__CTOR_OFFSET))(this, a1);
	}
};
