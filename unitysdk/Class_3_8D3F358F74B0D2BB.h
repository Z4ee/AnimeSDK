#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_0E33DF6F3EFCEEBD;
class Class_1_E944D5DF6BBB6FC4;
namespace MoleMole::Config { class LevelGlobalAICounterstrokeData; }
namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8D3F358F74B0D2BB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x119FD210)
#define CLASS_3_8D3F358F74B0D2BB_METHOD_3_149BCC7B62EEC1D9_OFFSET UNITYSDK_OFFSET(0x119FD370)
#define CLASS_3_8D3F358F74B0D2BB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x119FD450)
#define CLASS_3_8D3F358F74B0D2BB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x119FD2F0)
#define CLASS_3_8D3F358F74B0D2BB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x119FD1C0)
#define CLASS_3_8D3F358F74B0D2BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x119FD260)
#define CLASS_3_8D3F358F74B0D2BB__CTOR_OFFSET UNITYSDK_OFFSET(0x119FD2E0)

inline static constexpr unsigned int Class_3_8D3F358F74B0D2BB_TypeDefinitionIndex = 81543;

class Class_3_8D3F358F74B0D2BB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xBE; // 0x0
	::Class_1_0E33DF6F3EFCEEBD* Field_3_6; // 0x48
	::MoleMole::Config::LevelGlobalAICounterstrokeData* Field_3_5; // 0x50
	::System::Collections::Generic::List_1<::Class_1_E944D5DF6BBB6FC4*>* Field_3_3; // 0x58
	::MoleMole::Config::LevelGlobalCounterstrokeConfig* Field_3_4; // 0x60
	::System::Boolean Field_3_2; // 0x68
	::System::Single Field_3_0; // 0x6C
	::System::Single Field_3_1; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_8D3F358F74B0D2BB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8D3F358F74B0D2BB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_149BCC7B62EEC1D9(::MoleMole::Config::LevelGlobalCounterstrokeConfig* a1, ::MoleMole::Config::LevelGlobalAICounterstrokeData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*, ::MoleMole::Config::LevelGlobalAICounterstrokeData*))((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB_METHOD_3_149BCC7B62EEC1D9_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3F358F74B0D2BB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
