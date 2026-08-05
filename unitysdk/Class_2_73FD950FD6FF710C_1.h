#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_73FD950FD6FF710C_1_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1B9F8040)
#define CLASS_2_73FD950FD6FF710C_1_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1B9F7E50)
#define CLASS_2_73FD950FD6FF710C_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1B9F8180)
#define CLASS_2_73FD950FD6FF710C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8170)

inline static constexpr unsigned int Class_2_73FD950FD6FF710C_1_TypeDefinitionIndex = 67877;

class Class_2_73FD950FD6FF710C_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73FD950FD6FF710C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_73FD950FD6FF710C_1_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73FD950FD6FF710C_1_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_73FD950FD6FF710C_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
