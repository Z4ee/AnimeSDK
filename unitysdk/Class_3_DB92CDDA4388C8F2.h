#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1CD8D7A0)
#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_611E7447E4396CD7_OFFSET UNITYSDK_OFFSET(0x1CD8D760)
#define CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8D790)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_TypeDefinitionIndex = 22871;

class Class_3_DB92CDDA4388C8F2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* AOCGPGMHMEP; // 0x18
	::System::String* BMALIACHMOO; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::RPG::MVector3 NNACFJKJOHO; // 0x30
	::System::Single IEHPFADHJFD; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_611E7447E4396CD7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_611E7447E4396CD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
