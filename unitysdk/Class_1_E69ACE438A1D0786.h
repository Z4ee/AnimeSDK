#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_95;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E69ACE438A1D0786_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x16994FD0)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x16994F10)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_921D3C3F30DB7F08_OFFSET UNITYSDK_OFFSET(0x16994F50)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x16994F90)
#define CLASS_1_E69ACE438A1D0786__CTOR_OFFSET UNITYSDK_OFFSET(0x16995010)

inline static constexpr unsigned int Class_1_E69ACE438A1D0786_TypeDefinitionIndex = 59167;

class Class_1_E69ACE438A1D0786 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_95*>* Field_1_0; // 0x10
	::Class_1_1CBA230307F9C289_95* Field_1_1; // 0x18
	::RPG::GameCore::ActivitySummonDifficulty Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::Class_1_1CBA230307F9C289_95* a3, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_95*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_95*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_95*>*))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySummonDifficulty Method_1_921D3C3F30DB7F08()
	{
		return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_921D3C3F30DB7F08_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_95* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1CBA230307F9C289_95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_95*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
