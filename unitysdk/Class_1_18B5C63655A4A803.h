#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;
class Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_18B5C63655A4A803_METHOD_1_FA99FA5182B941C0_OFFSET UNITYSDK_OFFSET(0xDEA3440)
#define CLASS_1_18B5C63655A4A803__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA3430)

inline static constexpr unsigned int Class_1_18B5C63655A4A803_TypeDefinitionIndex = 55669;

class Class_1_18B5C63655A4A803 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_161*>* Field_1_1; // 0x10
	::MoleMole::HollowChessboard::EffectResult Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::EffectResult a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_161*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::EffectResult, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_161*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B5C63655A4A803__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FA99FA5182B941C0(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3, ::MoleMole::HollowChessboard::EffectResult& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + CLASS_1_18B5C63655A4A803_METHOD_1_FA99FA5182B941C0_OFFSET))(this, a1, a2, a3, a4);
	}
};
