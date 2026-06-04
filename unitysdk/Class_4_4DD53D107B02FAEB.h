#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_4DD53D107B02FAEB_METHOD_4_2BDA35FF9FE4DFDF_OFFSET UNITYSDK_OFFSET(0x1362F740)
#define CLASS_4_4DD53D107B02FAEB_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x1362F6F0)
#define CLASS_4_4DD53D107B02FAEB_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x1362F630)
#define CLASS_4_4DD53D107B02FAEB_METHOD_4_75FAC9CCCCA6B3B6_OFFSET UNITYSDK_OFFSET(0x1362F730)
#define CLASS_4_4DD53D107B02FAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1362F5B0)

inline static constexpr unsigned int Class_4_4DD53D107B02FAEB_TypeDefinitionIndex = 72152;

class Class_4_4DD53D107B02FAEB : public ::Class_3_8350EB57484CE308
{
public:
	::Class_2_B66C1067C0468FBB* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DD53D107B02FAEB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_4DD53D107B02FAEB_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DD53D107B02FAEB_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_75FAC9CCCCA6B3B6(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_4DD53D107B02FAEB_METHOD_4_75FAC9CCCCA6B3B6_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_2BDA35FF9FE4DFDF()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DD53D107B02FAEB_METHOD_4_2BDA35FF9FE4DFDF_OFFSET))(this);
	}
};
