#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoEffectPluginSyncEntityPos; }

#define CLASS_3_8F2DCA7AAF39C360_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD457B80)
#define CLASS_3_8F2DCA7AAF39C360_METHOD_3_8015C1C6E62C7AE5_OFFSET UNITYSDK_OFFSET(0xD457D70)
#define CLASS_3_8F2DCA7AAF39C360_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD457CE0)
#define CLASS_3_8F2DCA7AAF39C360_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xD457C60)
#define CLASS_3_8F2DCA7AAF39C360_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD457B30)
#define CLASS_3_8F2DCA7AAF39C360__CCTOR_OFFSET UNITYSDK_OFFSET(0xD457BD0)
#define CLASS_3_8F2DCA7AAF39C360__CTOR_OFFSET UNITYSDK_OFFSET(0xD457C50)

inline static constexpr unsigned int Class_3_8F2DCA7AAF39C360_TypeDefinitionIndex = 81513;

class Class_3_8F2DCA7AAF39C360 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xB7; // 0x0
	::MoleMole::MonoEffectPluginSyncEntityPos* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_8F2DCA7AAF39C360* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8F2DCA7AAF39C360*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_8015C1C6E62C7AE5(::MoleMole::MonoEffectPluginSyncEntityPos* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginSyncEntityPos*))((::PBYTE)hIl2Cpp + CLASS_3_8F2DCA7AAF39C360_METHOD_3_8015C1C6E62C7AE5_OFFSET))(this, a1);
	}
};
