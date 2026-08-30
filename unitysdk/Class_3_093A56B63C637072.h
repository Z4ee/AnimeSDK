#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_093A56B63C637072_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1C84BF70)
#define CLASS_3_093A56B63C637072_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1C84BF00)
#define CLASS_3_093A56B63C637072__CTOR_OFFSET UNITYSDK_OFFSET(0x1C84BF50)

inline static constexpr unsigned int Class_3_093A56B63C637072_TypeDefinitionIndex = 21247;

class Class_3_093A56B63C637072 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* CDMFNHJGGKF; // 0x18
	::System::Single KFLFCJLBCBC; // 0x20
	::System::Boolean FIKBKDJAFON; // 0x24
	::System::Boolean IOBJFEJFLJP; // 0x25
	::System::Single JGNDPDFEBBO; // 0x28
	::RPG::GameCore::PPEffectFilterPriority NALMBOOCCIN; // 0x2C
	::System::Single IIPKCANDFBK; // 0x30
	::System::Single IEHPFADHJFD; // 0x34
	::RPG::GameCore::PPEffectFilterPriorityGroup OMJNGMHJPBD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_093A56B63C637072__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_093A56B63C637072*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_093A56B63C637072*&))((::PBYTE)hIl2Cpp + CLASS_3_093A56B63C637072_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_093A56B63C637072* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_093A56B63C637072*))((::PBYTE)hIl2Cpp + CLASS_3_093A56B63C637072_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
