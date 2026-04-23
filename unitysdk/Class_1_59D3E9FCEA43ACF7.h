#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

class Class_1_10B66F9FBD70F037;
class Class_1_40118813D113D3D1;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_59D3E9FCEA43ACF7_METHOD_1_395F5ED194BAE7E4_OFFSET UNITYSDK_OFFSET(0x128EDE10)
#define CLASS_1_59D3E9FCEA43ACF7_METHOD_1_889771779779AC06_OFFSET UNITYSDK_OFFSET(0x128EDE70)
#define CLASS_1_59D3E9FCEA43ACF7_METHOD_1_89AA0D7D2C55F253_OFFSET UNITYSDK_OFFSET(0x128EDEE0)
#define CLASS_1_59D3E9FCEA43ACF7_METHOD_1_EBB28B2B5FC69F85_OFFSET UNITYSDK_OFFSET(0x128EDF40)
#define CLASS_1_59D3E9FCEA43ACF7__CTOR_OFFSET UNITYSDK_OFFSET(0x128EDDC0)

inline static constexpr unsigned int Class_1_59D3E9FCEA43ACF7_TypeDefinitionIndex = 57848;

class Class_1_59D3E9FCEA43ACF7 : public ::System::Object
{
public:
	::Class_1_10B66F9FBD70F037* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_10B66F9FBD70F037* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10B66F9FBD70F037*))((::PBYTE)hIl2Cpp + CLASS_1_59D3E9FCEA43ACF7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_395F5ED194BAE7E4(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_59D3E9FCEA43ACF7_METHOD_1_395F5ED194BAE7E4_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_1 Method_1_889771779779AC06(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_59D3E9FCEA43ACF7_METHOD_1_889771779779AC06_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_40118813D113D3D1*>* Method_1_89AA0D7D2C55F253(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_40118813D113D3D1*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_59D3E9FCEA43ACF7_METHOD_1_89AA0D7D2C55F253_OFFSET))(this, a1);
	}

	::RPG::GameCore::GenderType Method_1_EBB28B2B5FC69F85(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_59D3E9FCEA43ACF7_METHOD_1_EBB28B2B5FC69F85_OFFSET))(this, a1);
	}
};
