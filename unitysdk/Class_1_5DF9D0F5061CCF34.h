#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_249;
class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DF9D0F5061CCF34_METHOD_1_020D3918E612FDD8_OFFSET UNITYSDK_OFFSET(0x114BDE70)
#define CLASS_1_5DF9D0F5061CCF34_METHOD_1_1ACB94A8B147240A_OFFSET UNITYSDK_OFFSET(0x114BE120)
#define CLASS_1_5DF9D0F5061CCF34_METHOD_1_1E53936FAE87A970_OFFSET UNITYSDK_OFFSET(0x114BE260)
#define CLASS_1_5DF9D0F5061CCF34_METHOD_1_55507CED5E44C411_OFFSET UNITYSDK_OFFSET(0x114BE040)
#define CLASS_1_5DF9D0F5061CCF34_METHOD_1_B81BDBC74424F757_OFFSET UNITYSDK_OFFSET(0x114BDF10)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_TypeDefinitionIndex = 69757;

class Class_1_5DF9D0F5061CCF34 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_020D3918E612FDD8(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_METHOD_1_020D3918E612FDD8_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_249* Method_1_B81BDBC74424F757(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_249*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_METHOD_1_B81BDBC74424F757_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_249* Method_1_1ACB94A8B147240A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_249*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_METHOD_1_1ACB94A8B147240A_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_1E53936FAE87A970()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_METHOD_1_1E53936FAE87A970_OFFSET))();
	}

	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_55507CED5E44C411(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_METHOD_1_55507CED5E44C411_OFFSET))(a1);
	}
};
