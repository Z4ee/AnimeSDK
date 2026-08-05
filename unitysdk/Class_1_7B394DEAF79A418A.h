#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_390;
namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Member; }
namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }

#define CLASS_1_7B394DEAF79A418A_METHOD_1_1BAF7A4DB9E2146F_OFFSET UNITYSDK_OFFSET(0x12BB6ED0)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_2DF949410C72BEAF_OFFSET UNITYSDK_OFFSET(0x12BB7040)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_48A5096BA5D00248_OFFSET UNITYSDK_OFFSET(0x12BB6B90)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_6756F64B10DB0DFC_OFFSET UNITYSDK_OFFSET(0x12BB68F0)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_77A79DBD8F5A2FA8_OFFSET UNITYSDK_OFFSET(0x12BB6CE0)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_B22454FD9D621618_OFFSET UNITYSDK_OFFSET(0x12BB7140)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_B7549381471002C9_OFFSET UNITYSDK_OFFSET(0x12BB6790)
#define CLASS_1_7B394DEAF79A418A_METHOD_1_D174DD9B81C047ED_OFFSET UNITYSDK_OFFSET(0x12BB6C30)

inline static constexpr unsigned int Class_1_7B394DEAF79A418A_TypeDefinitionIndex = 73405;

class Class_1_7B394DEAF79A418A : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_390* Method_1_B7549381471002C9(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::Class_0_16E4307DCC419505_390*(*)(::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_B7549381471002C9_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_1_6756F64B10DB0DFC(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* a1)
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_6756F64B10DB0DFC_OFFSET))(a1);
	}

	static ::System::Void Method_1_48A5096BA5D00248(::Code::Logic::Data::ScriptObject::Level::Pattern* a1)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::Pattern*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_48A5096BA5D00248_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D174DD9B81C047ED(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_D174DD9B81C047ED_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* Method_1_77A79DBD8F5A2FA8(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_77A79DBD8F5A2FA8_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_390* Method_1_1BAF7A4DB9E2146F(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* a1, ::Code::Logic::Data::ScriptObject::Level::Member* a2)
	{
		return ((::Class_0_16E4307DCC419505_390*(*)(::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_1BAF7A4DB9E2146F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DF949410C72BEAF(::Code::Logic::Data::ScriptObject::Level::BeatMap* a1)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::BeatMap*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_2DF949410C72BEAF_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_B22454FD9D621618(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>* a1, ::Il2CppArray<::System::Int32>*& a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A_METHOD_1_B22454FD9D621618_OFFSET))(a1, a2);
	}
};
