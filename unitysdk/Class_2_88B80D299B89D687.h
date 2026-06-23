#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9.h"
#include "unitysdk/Class_5_FCAF801AC482D3B5_Enum_3_9EF644ED89A28AC6.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_3F9A20B8022097A7;
class Class_1_A617B16EB30351B4;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_2_88B80D299B89D687_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FC52C0)
#define CLASS_2_88B80D299B89D687_METHOD_2_037126EE311F43A1_OFFSET UNITYSDK_OFFSET(0x10FC5AA0)
#define CLASS_2_88B80D299B89D687_METHOD_2_A1B4EFC2759AE506_OFFSET UNITYSDK_OFFSET(0x10FC59B0)
#define CLASS_2_88B80D299B89D687_METHOD_2_DA20595F6121B6F3_OFFSET UNITYSDK_OFFSET(0x10FC5320)
#define CLASS_2_88B80D299B89D687__CTOR_OFFSET UNITYSDK_OFFSET(0x10FC5300)

inline static constexpr unsigned int Class_2_88B80D299B89D687_TypeDefinitionIndex = 79659;

class Class_2_88B80D299B89D687 : public ::Foundation::Singleton_1<::Class_2_88B80D299B89D687*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88B80D299B89D687__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88B80D299B89D687_DISPOSE_OFFSET))(this);
	}

	::Class_5_A6F8D19602712D95* Method_2_DA20595F6121B6F3(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_0AEBFEBDADDA07AC* a2, ::System::Boolean a3, ::Class_5_FCAF801AC482D3B5_Enum_3_9EF644ED89A28AC6 a4, ::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell> a5, ::MoleMole::Config::ConfigHollowChessboard* a6, ::Class_5_FCAF801AC482D3B5* a7, ::Class_1_3F9A20B8022097A7* a8, ::System::Boolean a9)
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean, ::Class_5_FCAF801AC482D3B5_Enum_3_9EF644ED89A28AC6, ::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell>, ::MoleMole::Config::ConfigHollowChessboard*, ::Class_5_FCAF801AC482D3B5*, ::Class_1_3F9A20B8022097A7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_88B80D299B89D687_METHOD_2_DA20595F6121B6F3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Class_1_A617B16EB30351B4* Method_2_A1B4EFC2759AE506(::Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9& a1)
	{
		return ((::Class_1_A617B16EB30351B4*(*)(::Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9&))((::PBYTE)hIl2Cpp + CLASS_2_88B80D299B89D687_METHOD_2_A1B4EFC2759AE506_OFFSET))(a1);
	}

	static ::System::Single Method_2_037126EE311F43A1(::Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9& a1)
	{
		return ((::System::Single(*)(::Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9&))((::PBYTE)hIl2Cpp + CLASS_2_88B80D299B89D687_METHOD_2_037126EE311F43A1_OFFSET))(a1);
	}
};
