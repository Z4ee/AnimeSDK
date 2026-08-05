#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_172;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_578D626AD8D36DB6_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x124F64E0)
#define CLASS_1_578D626AD8D36DB6_METHOD_1_A532BC5BDD150B77_OFFSET UNITYSDK_OFFSET(0x124F66B0)
#define CLASS_1_578D626AD8D36DB6_METHOD_1_B3ADE91382BF0B05_OFFSET UNITYSDK_OFFSET(0x124F6630)
#define CLASS_1_578D626AD8D36DB6_METHOD_1_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x124F6640)
#define CLASS_1_578D626AD8D36DB6_METHOD_1_CE0CF890BBAB2667_OFFSET UNITYSDK_OFFSET(0x124F5FD0)
#define CLASS_1_578D626AD8D36DB6__CTOR_OFFSET UNITYSDK_OFFSET(0x124F6620)

inline static constexpr unsigned int Class_1_578D626AD8D36DB6_TypeDefinitionIndex = 79214;

class Class_1_578D626AD8D36DB6 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_1_6; // 0x10
	::MoleMole::UIBaseController* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CE0CF890BBAB2667(::Class_0_16E4307DCC419505_172* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_172*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6_METHOD_1_CE0CF890BBAB2667_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_1_B3ADE91382BF0B05()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6_METHOD_1_B3ADE91382BF0B05_OFFSET))(this);
	}

	static ::Class_1_578D626AD8D36DB6* Method_1_BB7A1049F84E8127()
	{
		return ((::Class_1_578D626AD8D36DB6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6_METHOD_1_BB7A1049F84E8127_OFFSET))();
	}

	static ::Class_1_578D626AD8D36DB6* Method_1_A532BC5BDD150B77(::Class_0_16E4307DCC419505_172* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::Class_1_578D626AD8D36DB6*(*)(::Class_0_16E4307DCC419505_172*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_578D626AD8D36DB6_METHOD_1_A532BC5BDD150B77_OFFSET))(a1, a2);
	}
};
