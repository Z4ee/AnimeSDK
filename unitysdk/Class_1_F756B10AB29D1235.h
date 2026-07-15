#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F756B10AB29D1235_METHOD_1_0BCE1ADAABDF98B5_OFFSET UNITYSDK_OFFSET(0x17AF0790)
#define CLASS_1_F756B10AB29D1235_METHOD_1_76A6E6BDA2FA101B_OFFSET UNITYSDK_OFFSET(0x17AF0040)
#define CLASS_1_F756B10AB29D1235_METHOD_1_9DDF81475AE8EDEE_OFFSET UNITYSDK_OFFSET(0x17AF03C0)
#define CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_1_OFFSET UNITYSDK_OFFSET(0x17AF09E0)
#define CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_2_OFFSET UNITYSDK_OFFSET(0x17AF0A70)
#define CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x17AF0950)
#define CLASS_1_F756B10AB29D1235_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x17AF0720)
#define CLASS_1_F756B10AB29D1235__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AF0370)
#define CLASS_1_F756B10AB29D1235__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEFFF0)

inline static constexpr unsigned int Class_1_F756B10AB29D1235_TypeDefinitionIndex = 70525;

class Class_1_F756B10AB29D1235 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DDF81475AE8EDEE(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_9DDF81475AE8EDEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76A6E6BDA2FA101B(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_76A6E6BDA2FA101B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Int32 Method_1_0BCE1ADAABDF98B5(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_0BCE1ADAABDF98B5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_OFFSET))(this);
	}

	::System::Int32 Method_1_AA041EC2967F998A_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_1_OFFSET))(this);
	}

	::System::Int32 Method_1_AA041EC2967F998A_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F756B10AB29D1235_METHOD_1_AA041EC2967F998A_2_OFFSET))(this);
	}
};
