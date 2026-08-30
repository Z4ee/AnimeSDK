#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BezierProjectileData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1220A0A0)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_25A6D6D1C622BFDB_OFFSET UNITYSDK_OFFSET(0x12209460)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x12209C90)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x1220A000)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0x12209070)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x12209F10)
#define CLASS_2_F737CAF0DCE2C90D__CTOR_OFFSET UNITYSDK_OFFSET(0x12208FC0)

inline static constexpr unsigned int Class_2_F737CAF0DCE2C90D_TypeDefinitionIndex = 54945;

class Class_2_F737CAF0DCE2C90D : public ::Class_1_1835888C1E19F013
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KNJMEJLIEFF; // 0x48
	::RPG::GameCore::BezierProjectileData* FPGPHIEOMFL; // 0x50
	::UnityEngine::Vector3 EANKILEFHEA; // 0x58
	::UnityEngine::Vector3 AKEGBNBJKKM; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_A678846DF98684D3_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_25A6D6D1C622BFDB(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_25A6D6D1C622BFDB_OFFSET))(this, a1, a2, a3);
	}
};
