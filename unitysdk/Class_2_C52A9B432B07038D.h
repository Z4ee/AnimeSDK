#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_C52A9B432B07038D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154D13A0)
#define CLASS_2_C52A9B432B07038D_METHOD_2_1B1834151802612D_OFFSET UNITYSDK_OFFSET(0x154D15E0)
#define CLASS_2_C52A9B432B07038D_METHOD_2_28331AE553D95561_OFFSET UNITYSDK_OFFSET(0x154D1660)
#define CLASS_2_C52A9B432B07038D_METHOD_2_2963213B81440E81_OFFSET UNITYSDK_OFFSET(0x154D18B0)
#define CLASS_2_C52A9B432B07038D_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x154D1DA0)
#define CLASS_2_C52A9B432B07038D_METHOD_2_4D5F2889904E77ED_OFFSET UNITYSDK_OFFSET(0x154D2160)
#define CLASS_2_C52A9B432B07038D_METHOD_2_6654112694F54502_OFFSET UNITYSDK_OFFSET(0x154D16A0)
#define CLASS_2_C52A9B432B07038D_METHOD_2_71426A35A5D424AA_OFFSET UNITYSDK_OFFSET(0x154D1400)
#define CLASS_2_C52A9B432B07038D_METHOD_2_820677F9004DB97A_OFFSET UNITYSDK_OFFSET(0x154D1F10)
#define CLASS_2_C52A9B432B07038D_METHOD_2_F2909B766606AEA3_OFFSET UNITYSDK_OFFSET(0x154D19F0)
#define CLASS_2_C52A9B432B07038D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x154D1360)
#define CLASS_2_C52A9B432B07038D__CTOR_OFFSET UNITYSDK_OFFSET(0x154D13E0)

inline static constexpr unsigned int Class_2_C52A9B432B07038D_TypeDefinitionIndex = 76470;

class Class_2_C52A9B432B07038D : public ::Foundation::SingletonDisposable_1<::Class_2_C52A9B432B07038D*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_2_71426A35A5D424AA(::MoleMole::LanguageVoiceType a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_71426A35A5D424AA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_1B1834151802612D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_1B1834151802612D_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_28331AE553D95561(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_28331AE553D95561_OFFSET))(a1);
	}

	static ::System::String* Method_2_2963213B81440E81(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::String*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_2963213B81440E81_OFFSET))(a1);
	}

	static ::System::Void Method_2_F2909B766606AEA3(::MoleMole::LanguageVoiceType a1, ::System::String* a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_F2909B766606AEA3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_6654112694F54502(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_6654112694F54502_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Void Method_2_820677F9004DB97A(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_820677F9004DB97A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_4D5F2889904E77ED(::MoleMole::LanguageVoiceType a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_C52A9B432B07038D_METHOD_2_4D5F2889904E77ED_OFFSET))(a1, a2);
	}
};
