#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_3_AA6DF3A878195D3F;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_ECE1B0DC22E3457B;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6589BCFFACB088E4_METHOD_2_3E28812EC8337C66_OFFSET UNITYSDK_OFFSET(0xD462FB0)
#define CLASS_2_6589BCFFACB088E4_METHOD_2_83BE15615A1A1278_OFFSET UNITYSDK_OFFSET(0xD4622B0)
#define CLASS_2_6589BCFFACB088E4_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xD4631D0)
#define CLASS_2_6589BCFFACB088E4_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD462260)
#define CLASS_2_6589BCFFACB088E4__CTOR_OFFSET UNITYSDK_OFFSET(0xD462020)

inline static constexpr unsigned int Class_2_6589BCFFACB088E4_TypeDefinitionIndex = 83494;

class Class_2_6589BCFFACB088E4 : public ::Class_1_5AA2BE468EDCE452
{
public:
	::Class_3_ECE1B0DC22E3457B* Field_2_4; // 0x40
	::Class_3_DFD5D1FDB9D2A4AC* Field_2_5; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_2; // 0x50
	::Class_3_AA6DF3A878195D3F* Field_2_3; // 0x58
	::System::Collections::Generic::List_1<::Class_3_ECE1B0DC22E3457B*>* Field_2_1; // 0x60
	::System::Single Field_2_0; // 0x68

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6589BCFFACB088E4__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6589BCFFACB088E4_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_83BE15615A1A1278(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_6589BCFFACB088E4_METHOD_2_83BE15615A1A1278_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3E28812EC8337C66(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6589BCFFACB088E4_METHOD_2_3E28812EC8337C66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6589BCFFACB088E4_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
