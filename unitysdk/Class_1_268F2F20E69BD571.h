#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_F91AD0C5A85E4AFA_34;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_1_268F2F20E69BD571_METHOD_1_291B4194A1D85722_OFFSET UNITYSDK_OFFSET(0x15CCB5D0)
#define CLASS_1_268F2F20E69BD571_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15CCB6C0)
#define CLASS_1_268F2F20E69BD571_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x15CCB770)
#define CLASS_1_268F2F20E69BD571_METHOD_1_9032606E5E161A7C_OFFSET UNITYSDK_OFFSET(0x15CCB3D0)
#define CLASS_1_268F2F20E69BD571_METHOD_1_A631C7EB7F64062E_OFFSET UNITYSDK_OFFSET(0x15CCB4E0)
#define CLASS_1_268F2F20E69BD571_METHOD_1_C3418CA152AE161E_OFFSET UNITYSDK_OFFSET(0x15CCB700)
#define CLASS_1_268F2F20E69BD571__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCB4D0)

inline static constexpr unsigned int Class_1_268F2F20E69BD571_TypeDefinitionIndex = 74283;

class Class_1_268F2F20E69BD571 : public ::System::Object
{
public:
	::System::Boolean NIDCNJMNBIB; // 0x10
	::System::UInt32 CLEDGJJDJLG; // 0x14
	::RPG::Client::TextID OBBLBEDEKLO; // 0x18
	::RPG::Client::TextID DAJPMJNJNIL; // 0x28

	::System::Void _ctor(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_268F2F20E69BD571* Method_1_9032606E5E161A7C(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::Class_1_268F2F20E69BD571*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_9032606E5E161A7C_OFFSET))(a1);
	}

	::System::Void Method_1_A631C7EB7F64062E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_A631C7EB7F64062E_OFFSET))(this, a1);
	}

	::System::String* Method_1_291B4194A1D85722()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_291B4194A1D85722_OFFSET))(this);
	}

	::System::Void Method_1_C3418CA152AE161E(::Class_1_F91AD0C5A85E4AFA_34* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_C3418CA152AE161E_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
