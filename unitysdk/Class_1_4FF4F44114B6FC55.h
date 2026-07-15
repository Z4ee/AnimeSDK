#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FF4F44114B6FC55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E6F400)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_12395559324BC8AF_OFFSET UNITYSDK_OFFSET(0x15E6F180)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_3D84789139E72A57_OFFSET UNITYSDK_OFFSET(0x15E6EDF0)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_4E216924B49DDDE1_OFFSET UNITYSDK_OFFSET(0x15E6EED0)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x15E6EF40)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x15E6F2B0)
#define CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6EDB0)

inline static constexpr unsigned int Class_1_4FF4F44114B6FC55_TypeDefinitionIndex = 58218;

class Class_1_4FF4F44114B6FC55 : public ::System::Object
{
public:
	::RPG::Client::SpecialVisionSystem* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::SpecialVisionSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionSystem*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D84789139E72A57(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_3D84789139E72A57_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E216924B49DDDE1(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_4E216924B49DDDE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_1_12395559324BC8AF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_12395559324BC8AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_DISPOSE_OFFSET))(this);
	}
};
