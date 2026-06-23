#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_405;
namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Member; }
namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }

#define CLASS_1_755994DA329BE668_METHOD_1_2DF949410C72BEAF_OFFSET UNITYSDK_OFFSET(0x14D2CBF0)
#define CLASS_1_755994DA329BE668_METHOD_1_48A5096BA5D00248_OFFSET UNITYSDK_OFFSET(0x14D2C960)
#define CLASS_1_755994DA329BE668_METHOD_1_48FF8B0BACA20106_OFFSET UNITYSDK_OFFSET(0x14D2BC50)
#define CLASS_1_755994DA329BE668_METHOD_1_65B94B16D3FDC25A_OFFSET UNITYSDK_OFFSET(0x14D2CE50)
#define CLASS_1_755994DA329BE668_METHOD_1_80C07167FAD7F8C7_OFFSET UNITYSDK_OFFSET(0x14D2C8B0)
#define CLASS_1_755994DA329BE668_METHOD_1_A64A55F8AF27203E_OFFSET UNITYSDK_OFFSET(0x14D2CA00)
#define CLASS_1_755994DA329BE668_METHOD_1_B22454FD9D621618_OFFSET UNITYSDK_OFFSET(0x14D2BEE0)
#define CLASS_1_755994DA329BE668_METHOD_1_B7549381471002C9_OFFSET UNITYSDK_OFFSET(0x14D2CCF0)

inline static constexpr unsigned int Class_1_755994DA329BE668_TypeDefinitionIndex = 75182;

class Class_1_755994DA329BE668 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_1_48FF8B0BACA20106(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* a1)
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_48FF8B0BACA20106_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_B22454FD9D621618(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>* a1, ::Il2CppArray<::System::Int32>*& a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_B22454FD9D621618_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48A5096BA5D00248(::Code::Logic::Data::ScriptObject::Level::Pattern* a1)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::Pattern*))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_48A5096BA5D00248_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_80C07167FAD7F8C7(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_80C07167FAD7F8C7_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* Method_1_A64A55F8AF27203E(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_A64A55F8AF27203E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2DF949410C72BEAF(::Code::Logic::Data::ScriptObject::Level::BeatMap* a1)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::BeatMap*))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_2DF949410C72BEAF_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_405* Method_1_B7549381471002C9(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::Class_0_16E4307DCC419505_405*(*)(::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_B7549381471002C9_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_405* Method_1_65B94B16D3FDC25A(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* a1, ::Code::Logic::Data::ScriptObject::Level::Member* a2)
	{
		return ((::Class_0_16E4307DCC419505_405*(*)(::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_METHOD_1_65B94B16D3FDC25A_OFFSET))(a1, a2);
	}
};
