#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A12B6AC3275FEE42;
class Class_1_F38F1DFDC2D5A336;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2233CF21855EB1E6_METHOD_1_082ECB5C85E94A97_OFFSET UNITYSDK_OFFSET(0x155006E0)
#define CLASS_1_2233CF21855EB1E6_METHOD_1_3B1855A784A17DFE_OFFSET UNITYSDK_OFFSET(0x15500330)
#define CLASS_1_2233CF21855EB1E6_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x155001F0)
#define CLASS_1_2233CF21855EB1E6_METHOD_1_CF4727F4097D2159_OFFSET UNITYSDK_OFFSET(0x15500790)
#define CLASS_1_2233CF21855EB1E6__CTOR_OFFSET UNITYSDK_OFFSET(0x15500970)

inline static constexpr unsigned int Class_1_2233CF21855EB1E6_TypeDefinitionIndex = 68275;

class Class_1_2233CF21855EB1E6 : public ::System::Object
{
public:
	::Class_1_A12B6AC3275FEE42* CEFLLELKFOP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F38F1DFDC2D5A336*>* MHENFLMFDBK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6__CTOR_OFFSET))(this);
	}

	::Class_1_F38F1DFDC2D5A336* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_F38F1DFDC2D5A336*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_3B1855A784A17DFE(::System::Double a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6_METHOD_1_3B1855A784A17DFE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_082ECB5C85E94A97(::System::Double a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6_METHOD_1_082ECB5C85E94A97_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_CF4727F4097D2159()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6_METHOD_1_CF4727F4097D2159_OFFSET))(this);
	}
};
