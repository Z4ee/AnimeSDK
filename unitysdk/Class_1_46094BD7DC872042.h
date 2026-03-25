#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_137;
namespace RPG::Client { class GridFightGameSession; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46094BD7DC872042_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x10B5D5E0)
#define CLASS_1_46094BD7DC872042_METHOD_1_50F998D7F209A01F_OFFSET UNITYSDK_OFFSET(0x10B5D790)
#define CLASS_1_46094BD7DC872042__CTOR_OFFSET UNITYSDK_OFFSET(0x10B5D680)

inline static constexpr unsigned int Class_1_46094BD7DC872042_TypeDefinitionIndex = 52640;

class Class_1_46094BD7DC872042 : public ::System::Object
{
public:
	static ::Class_1_46094BD7DC872042** StaticGet_Field_1_0()
	{
		return (::Class_1_46094BD7DC872042**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46094BD7DC872042_TypeDefinitionIndex)->GetStaticField(0x47CC0);
	}
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_137*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46094BD7DC872042__CTOR_OFFSET))(this);
	}

	static ::Class_1_46094BD7DC872042* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_46094BD7DC872042*(*)())((::PBYTE)hIl2Cpp + CLASS_1_46094BD7DC872042_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_50F998D7F209A01F(::RPG::Client::GridFightGameSession* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + CLASS_1_46094BD7DC872042_METHOD_1_50F998D7F209A01F_OFFSET))(this, a1);
	}
};
